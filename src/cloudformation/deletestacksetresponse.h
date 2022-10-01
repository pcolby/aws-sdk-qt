// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTACKSETRESPONSE_H
#define QTAWS_DELETESTACKSETRESPONSE_H

#include "cloudformationresponse.h"
#include "deletestacksetrequest.h"

namespace QtAws {
namespace CloudFormation {

class DeleteStackSetResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT DeleteStackSetResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    DeleteStackSetResponse(const DeleteStackSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteStackSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStackSetResponse)
    Q_DISABLE_COPY(DeleteStackSetResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
