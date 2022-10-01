// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETERECIPEVERSIONRESPONSE_P_H
#define QTAWS_BATCHDELETERECIPEVERSIONRESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class BatchDeleteRecipeVersionResponse;

class BatchDeleteRecipeVersionResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit BatchDeleteRecipeVersionResponsePrivate(BatchDeleteRecipeVersionResponse * const q);

    void parseBatchDeleteRecipeVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDeleteRecipeVersionResponse)
    Q_DISABLE_COPY(BatchDeleteRecipeVersionResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
