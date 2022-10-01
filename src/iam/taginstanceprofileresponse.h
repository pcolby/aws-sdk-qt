// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGINSTANCEPROFILERESPONSE_H
#define QTAWS_TAGINSTANCEPROFILERESPONSE_H

#include "iamresponse.h"
#include "taginstanceprofilerequest.h"

namespace QtAws {
namespace Iam {

class TagInstanceProfileResponsePrivate;

class QTAWSIAM_EXPORT TagInstanceProfileResponse : public IamResponse {
    Q_OBJECT

public:
    TagInstanceProfileResponse(const TagInstanceProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TagInstanceProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagInstanceProfileResponse)
    Q_DISABLE_COPY(TagInstanceProfileResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
