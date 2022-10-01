// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFINDINGSFILTERSREQUEST_H
#define QTAWS_LISTFINDINGSFILTERSREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class ListFindingsFiltersRequestPrivate;

class QTAWSMACIE2_EXPORT ListFindingsFiltersRequest : public Macie2Request {

public:
    ListFindingsFiltersRequest(const ListFindingsFiltersRequest &other);
    ListFindingsFiltersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFindingsFiltersRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
