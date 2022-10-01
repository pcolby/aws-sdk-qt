// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDPERMISSIONRESPONSE_H
#define QTAWS_ADDPERMISSIONRESPONSE_H

#include "sqsresponse.h"
#include "addpermissionrequest.h"

namespace QtAws {
namespace Sqs {

class AddPermissionResponsePrivate;

class QTAWSSQS_EXPORT AddPermissionResponse : public SqsResponse {
    Q_OBJECT

public:
    AddPermissionResponse(const AddPermissionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddPermissionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddPermissionResponse)
    Q_DISABLE_COPY(AddPermissionResponse)

};

} // namespace Sqs
} // namespace QtAws

#endif
