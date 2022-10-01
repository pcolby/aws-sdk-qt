// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKEYWORDSFORDATASOURCEREQUEST_H
#define QTAWS_LISTKEYWORDSFORDATASOURCEREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class ListKeywordsForDataSourceRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT ListKeywordsForDataSourceRequest : public AuditManagerRequest {

public:
    ListKeywordsForDataSourceRequest(const ListKeywordsForDataSourceRequest &other);
    ListKeywordsForDataSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListKeywordsForDataSourceRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
