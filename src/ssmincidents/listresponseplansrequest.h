// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESPONSEPLANSREQUEST_H
#define QTAWS_LISTRESPONSEPLANSREQUEST_H

#include "ssmincidentsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class ListResponsePlansRequestPrivate;

class QTAWSSSMINCIDENTS_EXPORT ListResponsePlansRequest : public SsmIncidentsRequest {

public:
    ListResponsePlansRequest(const ListResponsePlansRequest &other);
    ListResponsePlansRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResponsePlansRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
