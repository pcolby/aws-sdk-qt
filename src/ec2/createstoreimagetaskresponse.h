// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTOREIMAGETASKRESPONSE_H
#define QTAWS_CREATESTOREIMAGETASKRESPONSE_H

#include "ec2response.h"
#include "createstoreimagetaskrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateStoreImageTaskResponsePrivate;

class QTAWSEC2_EXPORT CreateStoreImageTaskResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateStoreImageTaskResponse(const CreateStoreImageTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateStoreImageTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStoreImageTaskResponse)
    Q_DISABLE_COPY(CreateStoreImageTaskResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
