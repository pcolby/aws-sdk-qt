// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSOURCELOCATIONSREQUEST_H
#define QTAWS_LISTSOURCELOCATIONSREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class ListSourceLocationsRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT ListSourceLocationsRequest : public MediaTailorRequest {

public:
    ListSourceLocationsRequest(const ListSourceLocationsRequest &other);
    ListSourceLocationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSourceLocationsRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
