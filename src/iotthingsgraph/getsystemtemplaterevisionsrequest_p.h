// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSYSTEMTEMPLATEREVISIONSREQUEST_P_H
#define QTAWS_GETSYSTEMTEMPLATEREVISIONSREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "getsystemtemplaterevisionsrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetSystemTemplateRevisionsRequest;

class GetSystemTemplateRevisionsRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    GetSystemTemplateRevisionsRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   GetSystemTemplateRevisionsRequest * const q);
    GetSystemTemplateRevisionsRequestPrivate(const GetSystemTemplateRevisionsRequestPrivate &other,
                                   GetSystemTemplateRevisionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSystemTemplateRevisionsRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
