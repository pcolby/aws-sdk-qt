// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLERESOURCEDIMENSIONSREQUEST_H
#define QTAWS_LISTAVAILABLERESOURCEDIMENSIONSREQUEST_H

#include "pirequest.h"

namespace QtAws {
namespace Pi {

class ListAvailableResourceDimensionsRequestPrivate;

class QTAWSPI_EXPORT ListAvailableResourceDimensionsRequest : public PiRequest {

public:
    ListAvailableResourceDimensionsRequest(const ListAvailableResourceDimensionsRequest &other);
    ListAvailableResourceDimensionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAvailableResourceDimensionsRequest)

};

} // namespace Pi
} // namespace QtAws

#endif
