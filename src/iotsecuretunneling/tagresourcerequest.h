// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGRESOURCEREQUEST_H
#define QTAWS_TAGRESOURCEREQUEST_H

#include "iotsecuretunnelingrequest.h"

namespace QtAws {
namespace IoTSecureTunneling {

class TagResourceRequestPrivate;

class QTAWSIOTSECURETUNNELING_EXPORT TagResourceRequest : public IoTSecureTunnelingRequest {

public:
    TagResourceRequest(const TagResourceRequest &other);
    TagResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagResourceRequest)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
