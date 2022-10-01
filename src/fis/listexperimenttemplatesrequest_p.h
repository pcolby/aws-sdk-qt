// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPERIMENTTEMPLATESREQUEST_P_H
#define QTAWS_LISTEXPERIMENTTEMPLATESREQUEST_P_H

#include "fisrequest_p.h"
#include "listexperimenttemplatesrequest.h"

namespace QtAws {
namespace Fis {

class ListExperimentTemplatesRequest;

class ListExperimentTemplatesRequestPrivate : public FisRequestPrivate {

public:
    ListExperimentTemplatesRequestPrivate(const FisRequest::Action action,
                                   ListExperimentTemplatesRequest * const q);
    ListExperimentTemplatesRequestPrivate(const ListExperimentTemplatesRequestPrivate &other,
                                   ListExperimentTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListExperimentTemplatesRequest)

};

} // namespace Fis
} // namespace QtAws

#endif
