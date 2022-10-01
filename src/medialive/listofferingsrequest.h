// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOFFERINGSREQUEST_H
#define QTAWS_LISTOFFERINGSREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class ListOfferingsRequestPrivate;

class QTAWSMEDIALIVE_EXPORT ListOfferingsRequest : public MediaLiveRequest {

public:
    ListOfferingsRequest(const ListOfferingsRequest &other);
    ListOfferingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOfferingsRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
