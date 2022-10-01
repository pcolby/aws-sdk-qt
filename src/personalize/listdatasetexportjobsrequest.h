// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETEXPORTJOBSREQUEST_H
#define QTAWS_LISTDATASETEXPORTJOBSREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class ListDatasetExportJobsRequestPrivate;

class QTAWSPERSONALIZE_EXPORT ListDatasetExportJobsRequest : public PersonalizeRequest {

public:
    ListDatasetExportJobsRequest(const ListDatasetExportJobsRequest &other);
    ListDatasetExportJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDatasetExportJobsRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
