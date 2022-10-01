// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSOLUTIONVERSIONSREQUEST_H
#define QTAWS_LISTSOLUTIONVERSIONSREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class ListSolutionVersionsRequestPrivate;

class QTAWSPERSONALIZE_EXPORT ListSolutionVersionsRequest : public PersonalizeRequest {

public:
    ListSolutionVersionsRequest(const ListSolutionVersionsRequest &other);
    ListSolutionVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSolutionVersionsRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
