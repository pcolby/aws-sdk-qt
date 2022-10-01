// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTIPLEXESREQUEST_H
#define QTAWS_LISTMULTIPLEXESREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class ListMultiplexesRequestPrivate;

class QTAWSMEDIALIVE_EXPORT ListMultiplexesRequest : public MediaLiveRequest {

public:
    ListMultiplexesRequest(const ListMultiplexesRequest &other);
    ListMultiplexesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMultiplexesRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
