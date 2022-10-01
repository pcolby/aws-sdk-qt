// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTVERSIONSREQUEST_H
#define QTAWS_LISTCOMPONENTVERSIONSREQUEST_H

#include "greengrassv2request.h"

namespace QtAws {
namespace GreengrassV2 {

class ListComponentVersionsRequestPrivate;

class QTAWSGREENGRASSV2_EXPORT ListComponentVersionsRequest : public GreengrassV2Request {

public:
    ListComponentVersionsRequest(const ListComponentVersionsRequest &other);
    ListComponentVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListComponentVersionsRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
