// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATAREPOSITORYASSOCIATIONRESPONSE_P_H
#define QTAWS_UPDATEDATAREPOSITORYASSOCIATIONRESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class UpdateDataRepositoryAssociationResponse;

class UpdateDataRepositoryAssociationResponsePrivate : public FSxResponsePrivate {

public:

    explicit UpdateDataRepositoryAssociationResponsePrivate(UpdateDataRepositoryAssociationResponse * const q);

    void parseUpdateDataRepositoryAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDataRepositoryAssociationResponse)
    Q_DISABLE_COPY(UpdateDataRepositoryAssociationResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
