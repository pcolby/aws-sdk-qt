// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTIPLEXPROGRAMSREQUEST_H
#define QTAWS_LISTMULTIPLEXPROGRAMSREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class ListMultiplexProgramsRequestPrivate;

class QTAWSMEDIALIVE_EXPORT ListMultiplexProgramsRequest : public MediaLiveRequest {

public:
    ListMultiplexProgramsRequest(const ListMultiplexProgramsRequest &other);
    ListMultiplexProgramsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMultiplexProgramsRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
