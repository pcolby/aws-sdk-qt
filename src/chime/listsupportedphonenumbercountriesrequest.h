// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUPPORTEDPHONENUMBERCOUNTRIESREQUEST_H
#define QTAWS_LISTSUPPORTEDPHONENUMBERCOUNTRIESREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class ListSupportedPhoneNumberCountriesRequestPrivate;

class QTAWSCHIME_EXPORT ListSupportedPhoneNumberCountriesRequest : public ChimeRequest {

public:
    ListSupportedPhoneNumberCountriesRequest(const ListSupportedPhoneNumberCountriesRequest &other);
    ListSupportedPhoneNumberCountriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSupportedPhoneNumberCountriesRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
