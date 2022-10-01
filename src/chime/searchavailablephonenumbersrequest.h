// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHAVAILABLEPHONENUMBERSREQUEST_H
#define QTAWS_SEARCHAVAILABLEPHONENUMBERSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class SearchAvailablePhoneNumbersRequestPrivate;

class QTAWSCHIME_EXPORT SearchAvailablePhoneNumbersRequest : public ChimeRequest {

public:
    SearchAvailablePhoneNumbersRequest(const SearchAvailablePhoneNumbersRequest &other);
    SearchAvailablePhoneNumbersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchAvailablePhoneNumbersRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
