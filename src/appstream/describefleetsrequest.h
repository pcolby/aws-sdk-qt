// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETSREQUEST_H
#define QTAWS_DESCRIBEFLEETSREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeFleetsRequestPrivate;

class QTAWSAPPSTREAM_EXPORT DescribeFleetsRequest : public AppStreamRequest {

public:
    DescribeFleetsRequest(const DescribeFleetsRequest &other);
    DescribeFleetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetsRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
