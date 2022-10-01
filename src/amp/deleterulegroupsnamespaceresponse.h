// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERULEGROUPSNAMESPACERESPONSE_H
#define QTAWS_DELETERULEGROUPSNAMESPACERESPONSE_H

#include "ampresponse.h"
#include "deleterulegroupsnamespacerequest.h"

namespace QtAws {
namespace Amp {

class DeleteRuleGroupsNamespaceResponsePrivate;

class QTAWSAMP_EXPORT DeleteRuleGroupsNamespaceResponse : public AmpResponse {
    Q_OBJECT

public:
    DeleteRuleGroupsNamespaceResponse(const DeleteRuleGroupsNamespaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRuleGroupsNamespaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRuleGroupsNamespaceResponse)
    Q_DISABLE_COPY(DeleteRuleGroupsNamespaceResponse)

};

} // namespace Amp
} // namespace QtAws

#endif
