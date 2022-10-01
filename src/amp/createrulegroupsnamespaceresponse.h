// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERULEGROUPSNAMESPACERESPONSE_H
#define QTAWS_CREATERULEGROUPSNAMESPACERESPONSE_H

#include "ampresponse.h"
#include "createrulegroupsnamespacerequest.h"

namespace QtAws {
namespace Amp {

class CreateRuleGroupsNamespaceResponsePrivate;

class QTAWSAMP_EXPORT CreateRuleGroupsNamespaceResponse : public AmpResponse {
    Q_OBJECT

public:
    CreateRuleGroupsNamespaceResponse(const CreateRuleGroupsNamespaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRuleGroupsNamespaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRuleGroupsNamespaceResponse)
    Q_DISABLE_COPY(CreateRuleGroupsNamespaceResponse)

};

} // namespace Amp
} // namespace QtAws

#endif
