// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTACKSETRESPONSE_H
#define QTAWS_UPDATESTACKSETRESPONSE_H

#include "cloudformationresponse.h"
#include "updatestacksetrequest.h"

namespace QtAws {
namespace CloudFormation {

class UpdateStackSetResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT UpdateStackSetResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    UpdateStackSetResponse(const UpdateStackSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateStackSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStackSetResponse)
    Q_DISABLE_COPY(UpdateStackSetResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
