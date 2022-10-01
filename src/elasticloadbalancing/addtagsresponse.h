// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSRESPONSE_H
#define QTAWS_ADDTAGSRESPONSE_H

#include "elasticloadbalancingresponse.h"
#include "addtagsrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class AddTagsResponsePrivate;

class QTAWSELASTICLOADBALANCING_EXPORT AddTagsResponse : public ElasticLoadBalancingResponse {
    Q_OBJECT

public:
    AddTagsResponse(const AddTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddTagsResponse)
    Q_DISABLE_COPY(AddTagsResponse)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
