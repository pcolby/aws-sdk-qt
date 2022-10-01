// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGETAGSFORRESOURCERESPONSE_H
#define QTAWS_CHANGETAGSFORRESOURCERESPONSE_H

#include "route53response.h"
#include "changetagsforresourcerequest.h"

namespace QtAws {
namespace Route53 {

class ChangeTagsForResourceResponsePrivate;

class QTAWSROUTE53_EXPORT ChangeTagsForResourceResponse : public Route53Response {
    Q_OBJECT

public:
    ChangeTagsForResourceResponse(const ChangeTagsForResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ChangeTagsForResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ChangeTagsForResourceResponse)
    Q_DISABLE_COPY(ChangeTagsForResourceResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
