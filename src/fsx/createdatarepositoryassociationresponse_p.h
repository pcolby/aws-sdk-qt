// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATAREPOSITORYASSOCIATIONRESPONSE_P_H
#define QTAWS_CREATEDATAREPOSITORYASSOCIATIONRESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class CreateDataRepositoryAssociationResponse;

class CreateDataRepositoryAssociationResponsePrivate : public FSxResponsePrivate {

public:

    explicit CreateDataRepositoryAssociationResponsePrivate(CreateDataRepositoryAssociationResponse * const q);

    void parseCreateDataRepositoryAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDataRepositoryAssociationResponse)
    Q_DISABLE_COPY(CreateDataRepositoryAssociationResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
