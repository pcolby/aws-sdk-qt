// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHDEVICESREQUEST_H
#define QTAWS_SEARCHDEVICESREQUEST_H

#include "braketrequest.h"

namespace QtAws {
namespace Braket {

class SearchDevicesRequestPrivate;

class QTAWSBRAKET_EXPORT SearchDevicesRequest : public BraketRequest {

public:
    SearchDevicesRequest(const SearchDevicesRequest &other);
    SearchDevicesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchDevicesRequest)

};

} // namespace Braket
} // namespace QtAws

#endif
