// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPERIMENTTEMPLATESREQUEST_H
#define QTAWS_LISTEXPERIMENTTEMPLATESREQUEST_H

#include "fisrequest.h"

namespace QtAws {
namespace Fis {

class ListExperimentTemplatesRequestPrivate;

class QTAWSFIS_EXPORT ListExperimentTemplatesRequest : public FisRequest {

public:
    ListExperimentTemplatesRequest(const ListExperimentTemplatesRequest &other);
    ListExperimentTemplatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExperimentTemplatesRequest)

};

} // namespace Fis
} // namespace QtAws

#endif
