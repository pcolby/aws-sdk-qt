// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTYPEREGISTRATIONSRESPONSE_H
#define QTAWS_LISTTYPEREGISTRATIONSRESPONSE_H

#include "cloudformationresponse.h"
#include "listtyperegistrationsrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListTypeRegistrationsResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT ListTypeRegistrationsResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    ListTypeRegistrationsResponse(const ListTypeRegistrationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTypeRegistrationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTypeRegistrationsResponse)
    Q_DISABLE_COPY(ListTypeRegistrationsResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
