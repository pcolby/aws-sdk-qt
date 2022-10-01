// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRULEGROUPSNAMESPACERESPONSE_H
#define QTAWS_PUTRULEGROUPSNAMESPACERESPONSE_H

#include "ampresponse.h"
#include "putrulegroupsnamespacerequest.h"

namespace QtAws {
namespace Amp {

class PutRuleGroupsNamespaceResponsePrivate;

class QTAWSAMP_EXPORT PutRuleGroupsNamespaceResponse : public AmpResponse {
    Q_OBJECT

public:
    PutRuleGroupsNamespaceResponse(const PutRuleGroupsNamespaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRuleGroupsNamespaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRuleGroupsNamespaceResponse)
    Q_DISABLE_COPY(PutRuleGroupsNamespaceResponse)

};

} // namespace Amp
} // namespace QtAws

#endif
