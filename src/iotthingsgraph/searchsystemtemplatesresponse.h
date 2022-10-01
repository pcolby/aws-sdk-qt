// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHSYSTEMTEMPLATESRESPONSE_H
#define QTAWS_SEARCHSYSTEMTEMPLATESRESPONSE_H

#include "iotthingsgraphresponse.h"
#include "searchsystemtemplatesrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class SearchSystemTemplatesResponsePrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT SearchSystemTemplatesResponse : public IoTThingsGraphResponse {
    Q_OBJECT

public:
    SearchSystemTemplatesResponse(const SearchSystemTemplatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchSystemTemplatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchSystemTemplatesResponse)
    Q_DISABLE_COPY(SearchSystemTemplatesResponse)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
