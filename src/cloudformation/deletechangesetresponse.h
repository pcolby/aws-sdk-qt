// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANGESETRESPONSE_H
#define QTAWS_DELETECHANGESETRESPONSE_H

#include "cloudformationresponse.h"
#include "deletechangesetrequest.h"

namespace QtAws {
namespace CloudFormation {

class DeleteChangeSetResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT DeleteChangeSetResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    DeleteChangeSetResponse(const DeleteChangeSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteChangeSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteChangeSetResponse)
    Q_DISABLE_COPY(DeleteChangeSetResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
