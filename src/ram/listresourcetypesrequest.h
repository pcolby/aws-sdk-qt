// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCETYPESREQUEST_H
#define QTAWS_LISTRESOURCETYPESREQUEST_H

#include "ramrequest.h"

namespace QtAws {
namespace Ram {

class ListResourceTypesRequestPrivate;

class QTAWSRAM_EXPORT ListResourceTypesRequest : public RamRequest {

public:
    ListResourceTypesRequest(const ListResourceTypesRequest &other);
    ListResourceTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourceTypesRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
