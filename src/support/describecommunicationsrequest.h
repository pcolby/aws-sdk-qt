// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMMUNICATIONSREQUEST_H
#define QTAWS_DESCRIBECOMMUNICATIONSREQUEST_H

#include "supportrequest.h"

namespace QtAws {
namespace Support {

class DescribeCommunicationsRequestPrivate;

class QTAWSSUPPORT_EXPORT DescribeCommunicationsRequest : public SupportRequest {

public:
    DescribeCommunicationsRequest(const DescribeCommunicationsRequest &other);
    DescribeCommunicationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCommunicationsRequest)

};

} // namespace Support
} // namespace QtAws

#endif
