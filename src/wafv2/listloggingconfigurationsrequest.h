// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGGINGCONFIGURATIONSREQUEST_H
#define QTAWS_LISTLOGGINGCONFIGURATIONSREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class ListLoggingConfigurationsRequestPrivate;

class QTAWSWAFV2_EXPORT ListLoggingConfigurationsRequest : public Wafv2Request {

public:
    ListLoggingConfigurationsRequest(const ListLoggingConfigurationsRequest &other);
    ListLoggingConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLoggingConfigurationsRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
