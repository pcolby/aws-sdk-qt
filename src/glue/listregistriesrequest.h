// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREGISTRIESREQUEST_H
#define QTAWS_LISTREGISTRIESREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class ListRegistriesRequestPrivate;

class QTAWSGLUE_EXPORT ListRegistriesRequest : public GlueRequest {

public:
    ListRegistriesRequest(const ListRegistriesRequest &other);
    ListRegistriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRegistriesRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
