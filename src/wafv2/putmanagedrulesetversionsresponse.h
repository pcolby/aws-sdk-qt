// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMANAGEDRULESETVERSIONSRESPONSE_H
#define QTAWS_PUTMANAGEDRULESETVERSIONSRESPONSE_H

#include "wafv2response.h"
#include "putmanagedrulesetversionsrequest.h"

namespace QtAws {
namespace Wafv2 {

class PutManagedRuleSetVersionsResponsePrivate;

class QTAWSWAFV2_EXPORT PutManagedRuleSetVersionsResponse : public Wafv2Response {
    Q_OBJECT

public:
    PutManagedRuleSetVersionsResponse(const PutManagedRuleSetVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutManagedRuleSetVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutManagedRuleSetVersionsResponse)
    Q_DISABLE_COPY(PutManagedRuleSetVersionsResponse)

};

} // namespace Wafv2
} // namespace QtAws

#endif
