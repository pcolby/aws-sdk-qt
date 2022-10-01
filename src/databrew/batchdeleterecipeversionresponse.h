// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETERECIPEVERSIONRESPONSE_H
#define QTAWS_BATCHDELETERECIPEVERSIONRESPONSE_H

#include "databrewresponse.h"
#include "batchdeleterecipeversionrequest.h"

namespace QtAws {
namespace DataBrew {

class BatchDeleteRecipeVersionResponsePrivate;

class QTAWSDATABREW_EXPORT BatchDeleteRecipeVersionResponse : public DataBrewResponse {
    Q_OBJECT

public:
    BatchDeleteRecipeVersionResponse(const BatchDeleteRecipeVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDeleteRecipeVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteRecipeVersionResponse)
    Q_DISABLE_COPY(BatchDeleteRecipeVersionResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
