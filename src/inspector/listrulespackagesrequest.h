// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULESPACKAGESREQUEST_H
#define QTAWS_LISTRULESPACKAGESREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class ListRulesPackagesRequestPrivate;

class QTAWSINSPECTOR_EXPORT ListRulesPackagesRequest : public InspectorRequest {

public:
    ListRulesPackagesRequest(const ListRulesPackagesRequest &other);
    ListRulesPackagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRulesPackagesRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
