// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASETRESPONSE_H
#define QTAWS_UPDATEDATASETRESPONSE_H

#include "databrewresponse.h"
#include "updatedatasetrequest.h"

namespace QtAws {
namespace DataBrew {

class UpdateDatasetResponsePrivate;

class QTAWSDATABREW_EXPORT UpdateDatasetResponse : public DataBrewResponse {
    Q_OBJECT

public:
    UpdateDatasetResponse(const UpdateDatasetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDatasetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDatasetResponse)
    Q_DISABLE_COPY(UpdateDatasetResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
