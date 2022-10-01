// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELBANSREQUEST_H
#define QTAWS_LISTCHANNELBANSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class ListChannelBansRequestPrivate;

class QTAWSCHIME_EXPORT ListChannelBansRequest : public ChimeRequest {

public:
    ListChannelBansRequest(const ListChannelBansRequest &other);
    ListChannelBansRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChannelBansRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
