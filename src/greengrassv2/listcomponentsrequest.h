// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTSREQUEST_H
#define QTAWS_LISTCOMPONENTSREQUEST_H

#include "greengrassv2request.h"

namespace QtAws {
namespace GreengrassV2 {

class ListComponentsRequestPrivate;

class QTAWSGREENGRASSV2_EXPORT ListComponentsRequest : public GreengrassV2Request {

public:
    ListComponentsRequest(const ListComponentsRequest &other);
    ListComponentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListComponentsRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
