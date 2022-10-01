// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPERIENCESREQUEST_H
#define QTAWS_LISTEXPERIENCESREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class ListExperiencesRequestPrivate;

class QTAWSKENDRA_EXPORT ListExperiencesRequest : public KendraRequest {

public:
    ListExperiencesRequest(const ListExperiencesRequest &other);
    ListExperiencesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExperiencesRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
