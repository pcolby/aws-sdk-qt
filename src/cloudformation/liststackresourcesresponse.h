// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKRESOURCESRESPONSE_H
#define QTAWS_LISTSTACKRESOURCESRESPONSE_H

#include "cloudformationresponse.h"
#include "liststackresourcesrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListStackResourcesResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT ListStackResourcesResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    ListStackResourcesResponse(const ListStackResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStackResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStackResourcesResponse)
    Q_DISABLE_COPY(ListStackResourcesResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
