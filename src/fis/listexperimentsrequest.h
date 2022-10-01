// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPERIMENTSREQUEST_H
#define QTAWS_LISTEXPERIMENTSREQUEST_H

#include "fisrequest.h"

namespace QtAws {
namespace Fis {

class ListExperimentsRequestPrivate;

class QTAWSFIS_EXPORT ListExperimentsRequest : public FisRequest {

public:
    ListExperimentsRequest(const ListExperimentsRequest &other);
    ListExperimentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExperimentsRequest)

};

} // namespace Fis
} // namespace QtAws

#endif
