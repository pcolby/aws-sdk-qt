// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTSUBSCRIPTIONSREQUEST_H
#define QTAWS_LISTEVENTSUBSCRIPTIONSREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class ListEventSubscriptionsRequestPrivate;

class QTAWSINSPECTOR_EXPORT ListEventSubscriptionsRequest : public InspectorRequest {

public:
    ListEventSubscriptionsRequest(const ListEventSubscriptionsRequest &other);
    ListEventSubscriptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventSubscriptionsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
