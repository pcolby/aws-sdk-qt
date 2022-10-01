// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCEPROFILERESPONSE_H
#define QTAWS_DELETEINSTANCEPROFILERESPONSE_H

#include "iamresponse.h"
#include "deleteinstanceprofilerequest.h"

namespace QtAws {
namespace Iam {

class DeleteInstanceProfileResponsePrivate;

class QTAWSIAM_EXPORT DeleteInstanceProfileResponse : public IamResponse {
    Q_OBJECT

public:
    DeleteInstanceProfileResponse(const DeleteInstanceProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteInstanceProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInstanceProfileResponse)
    Q_DISABLE_COPY(DeleteInstanceProfileResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
