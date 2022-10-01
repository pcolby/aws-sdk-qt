// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSOLUTIONSREQUEST_H
#define QTAWS_LISTSOLUTIONSREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class ListSolutionsRequestPrivate;

class QTAWSPERSONALIZE_EXPORT ListSolutionsRequest : public PersonalizeRequest {

public:
    ListSolutionsRequest(const ListSolutionsRequest &other);
    ListSolutionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSolutionsRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
