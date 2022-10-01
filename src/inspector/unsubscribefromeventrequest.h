// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNSUBSCRIBEFROMEVENTREQUEST_H
#define QTAWS_UNSUBSCRIBEFROMEVENTREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class UnsubscribeFromEventRequestPrivate;

class QTAWSINSPECTOR_EXPORT UnsubscribeFromEventRequest : public InspectorRequest {

public:
    UnsubscribeFromEventRequest(const UnsubscribeFromEventRequest &other);
    UnsubscribeFromEventRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnsubscribeFromEventRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
