// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNODESREQUEST_H
#define QTAWS_LISTNODESREQUEST_H

#include "panoramarequest.h"

namespace QtAws {
namespace Panorama {

class ListNodesRequestPrivate;

class QTAWSPANORAMA_EXPORT ListNodesRequest : public PanoramaRequest {

public:
    ListNodesRequest(const ListNodesRequest &other);
    ListNodesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNodesRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
