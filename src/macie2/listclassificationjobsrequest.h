// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLASSIFICATIONJOBSREQUEST_H
#define QTAWS_LISTCLASSIFICATIONJOBSREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class ListClassificationJobsRequestPrivate;

class QTAWSMACIE2_EXPORT ListClassificationJobsRequest : public Macie2Request {

public:
    ListClassificationJobsRequest(const ListClassificationJobsRequest &other);
    ListClassificationJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListClassificationJobsRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
