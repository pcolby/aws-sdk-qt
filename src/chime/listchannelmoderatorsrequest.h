// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELMODERATORSREQUEST_H
#define QTAWS_LISTCHANNELMODERATORSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class ListChannelModeratorsRequestPrivate;

class QTAWSCHIME_EXPORT ListChannelModeratorsRequest : public ChimeRequest {

public:
    ListChannelModeratorsRequest(const ListChannelModeratorsRequest &other);
    ListChannelModeratorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChannelModeratorsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
