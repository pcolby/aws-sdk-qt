// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBSCRIBETOEVENTREQUEST_H
#define QTAWS_SUBSCRIBETOEVENTREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class SubscribeToEventRequestPrivate;

class QTAWSINSPECTOR_EXPORT SubscribeToEventRequest : public InspectorRequest {

public:
    SubscribeToEventRequest(const SubscribeToEventRequest &other);
    SubscribeToEventRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SubscribeToEventRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
